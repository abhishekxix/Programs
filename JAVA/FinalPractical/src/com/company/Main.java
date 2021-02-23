package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class RegistrationFrame extends JFrame implements ActionListener {

    private final Container container;
    private final JLabel pageTitle;
    private final JLabel nameLabel;
    private final JTextField nameInput;
    private final JLabel mobileLabel;
    private final JTextField mobileInput;
    private final JLabel genderLabel;
    private final JRadioButton male;
    private final JRadioButton female;
    private final ButtonGroup genderGroup;
    private final JLabel dobLabel;
    private final JComboBox date;
    private final JComboBox month;
    private final JComboBox year;
    private final JLabel addressLabel;
    private final JTextArea addressInput;
    private final JButton submitButton;
    private final JButton resetButton;
    private final JLabel result;

    private String dates[]
            = { "1", "2", "3", "4", "5",
            "6", "7", "8", "9", "10",
            "11", "12", "13", "14", "15",
            "16", "17", "18", "19", "20",
            "21", "22", "23", "24", "25",
            "26", "27", "28", "29", "30",
            "31" };
    private String months[]
            = { "Jan", "feb", "Mar", "Apr",
            "May", "Jun", "July", "Aug",
            "Sup", "Oct", "Nov", "Dec" };
    private String years[]
            = { "1995", "1996", "1997", "1998",
            "1999", "2000", "2001", "2002",
            "2003", "2004", "2005", "2006",
            "2007", "2008", "2009", "2010",
            "2011", "2012", "2013", "2014",
            "2015", "2016", "2017", "2018",
            "2019" };
    private String[] classNumber = {
            "1", "2", "3", "4", "5", "6",
            "7", "8", "9", "10", "11", "12"
    };


    public RegistrationFrame() {
        this.setTitle("Student Registration Form");
        this.setBounds(300, 90, 900, 600);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);


        this.container = getContentPane();
        this.container.setLayout(null);

        this.pageTitle = new JLabel("Student Registration Form");
        this.pageTitle.setFont(new Font("serif", Font.BOLD, 22));
        this.pageTitle.setSize(300, 30);
        this.pageTitle.setLocation(300, 30);
        this.container.add(this.pageTitle);

        this.nameLabel = new JLabel("Student Name");
        this.nameLabel.setFont(new Font("serif", Font.PLAIN, 20));
        this.nameLabel.setSize(150, 20);
        this.nameLabel.setLocation(100, 100);
        this.container.add(this.nameLabel);

        this.nameInput = new JTextField();
        this.nameInput.setFont(new Font("Arial", Font.PLAIN, 15));
        this.nameInput.setSize(190, 20);
        this.nameInput.setLocation(250, 100);
        this.container.add(this.nameInput);

        this.mobileLabel = new JLabel("Mobile Number");
        this.mobileLabel.setFont(new Font("serif", Font.PLAIN, 20));
        this.mobileLabel.setSize(150, 20);
        this.mobileLabel.setLocation(100, 150);
        this.container.add(mobileLabel);

        this.mobileInput = new JTextField();
        this.mobileInput.setFont(new Font("serif", Font.PLAIN, 15));
        this.mobileInput.setSize(150, 20);
        this.mobileInput.setLocation(250, 150);
        this.container.add(this.mobileInput);

        this.genderLabel = new JLabel("Gender");
        this.genderLabel.setFont(new Font("serif", Font.PLAIN, 20));
        this.genderLabel.setSize(100, 20);
        this.genderLabel.setLocation(100, 200);
        this.container.add(this.genderLabel);

        this.male = new JRadioButton("Male");
        this.male.setFont(new Font("serif", Font.PLAIN, 15));
        this.male.setSelected(true);
        this.male.setSize(75, 20);
        this.male.setLocation(250, 200);
        this.container.add(this.male);

        this.female = new JRadioButton("Female");
        this.female.setFont(new Font("serif", Font.PLAIN, 15));
        this.female.setSelected(false);
        this.female.setSize(80, 20);
        this.female.setLocation(325, 200);
        this.container.add(female);

        this.genderGroup = new ButtonGroup();
        this.genderGroup.add(this.male);
        this.genderGroup.add(this.female);

        this.dobLabel = new JLabel("DOB");
        this.dobLabel.setFont(new Font("serif", Font.PLAIN, 20));
        this.dobLabel.setSize(100, 20);
        this.dobLabel.setLocation(100, 250);
        this.container.add(dobLabel);

        this.date = new JComboBox(this.dates);
        this.date.setFont(new Font("serif", Font.PLAIN, 15));
        this.date.setSize(50, 20);
        this.date.setLocation(250, 250);
        this.container.add(this.date);

        this.month = new JComboBox(this.months);
        this.month.setFont(new Font("serif", Font.PLAIN, 15));
        this.month.setSize(60, 20);
        this.month.setLocation(300, 250);
        this.container.add(this.month);

        this.year = new JComboBox(this.years);
        this.year.setFont(new Font("serif", Font.PLAIN, 15));
        this.year.setSize(60, 20);
        this.year.setLocation(360, 250);
        this.container.add(this.year);

        this.addressLabel = new JLabel("Address");
        this.addressLabel.setFont(new Font("serif", Font.PLAIN, 20));
        this.addressLabel.setSize(100, 20);
        this.addressLabel.setLocation(100, 300);
        this.container.add(this.addressLabel);

        this.addressInput = new JTextArea();
        this.addressInput.setFont(new Font("serif", Font.PLAIN, 15));
        this.addressInput.setSize(200, 75);
        this.addressInput.setLocation(250, 300);
        this.addressInput.setLineWrap(true);
        this.container.add(this.addressInput);

        JLabel classLabel = new JLabel("Class");
        classLabel.setFont(new Font("serif", Font.PLAIN, 20));
        classLabel.setSize(100, 20);
        classLabel.setLocation(100, 400);
        this.container.add(classLabel);

        JComboBox<String> classNum = new JComboBox<>(this.classNumber);
        classNum.setFont(new Font("serif", Font.PLAIN, 15));
        classNum.setSize(60, 20);
        classNum.setLocation(250, 400);
        this.container.add(classNum);

        this.submitButton = new JButton("Submit");
        this.submitButton.setFont(new Font("serif", Font.PLAIN, 15));
        this.submitButton.setSize(100, 20);
        this.submitButton.setLocation(250, 450);
        this.submitButton.addActionListener(this);
        this.container.add(this.submitButton);

        this.resetButton = new JButton("Reset");
        this.resetButton.setFont(new Font("serif", Font.PLAIN, 15));
        this.resetButton.setSize(100, 20);
        this.resetButton.setLocation(400, 450);
        this.resetButton.addActionListener(this);
        this.container.add(this.resetButton);

        this.result = new JLabel("");
        this.result.setFont(new Font("serif", Font.PLAIN, 20));
        this.result.setSize(500, 25);
        this.result.setLocation(100, 500);
        this.container.add(this.result);


        this.setVisible(true);
    }


    public void actionPerformed(ActionEvent e)
    {
        if (e.getSource() == submitButton) {
            this.result.setText("Registration Successful..");
        } else {
            result.setText("");
        }

    }
}


public class Main {

    public static void main(String[] args)  {
        RegistrationFrame f = new RegistrationFrame();
    }
}
