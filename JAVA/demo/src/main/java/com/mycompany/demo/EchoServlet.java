/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.demo;

/**
 *
 * @author abhishek
 */
import java.io.*;
import javax.servlet.http.*;

public class EchoServlet extends HttpServlet {



@Override
public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException {



     // Set response content type

response.setContentType("text/html");



PrintWriter out = response.getWriter();

     String title = "Using GET Method to Read Form Data";

     String docType =

        "<!doctype html public \"-//w3c//dtd html 4.0 " + "transitional//en\">\n";



out.println(docType +

        "<html>\n" +

           "<head><title>" + title + "</title></head>\n" +

           "<body bgcolor = \"#f0f0f0\">\n" +

              "<h1 align = \"center\">" + title + "</h1>\n" +

              "<ul>\n" +

" <li><b>First Name</b>: "

                 + request.getParameter("first_name") + "\n" +

" <li><b>Last Name</b>: "

                 + request.getParameter("last_name") + "\n" +

              "</ul>\n" + "</body>"+

        "</html>"

     );

  }

}

