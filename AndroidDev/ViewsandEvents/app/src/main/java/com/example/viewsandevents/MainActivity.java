package com.example.viewsandevents;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    /**
     * To use the OnClickListener with the button, we have to implement the View.OnClickListener interface in our Activity.
    */

    TextView t1;    //TextView instance to use in our Activity
    TextView t2;
    Button change1; //Button instance reference to use in the Activity

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        t1 = (TextView)findViewById(R.id.my_title);     //the findViewById() method returns an object instance
                                                        //Therefore it needs to be casted to the appropriate View type.
        change1 = (Button)findViewById(R.id.change_1);  //same as the above case.
        change1.setOnClickListener(this);   //to associate the OnClickListener with the button change1 and the this
                                            //specifies the context or the scope of the button.
        t2 = (TextView)findViewById(R.id.my_title_2);
    }

    /**
     * This method defines the behavior on clicking the view that has been associated with the OnClickListener.
     * The @param View v is the associated button that has been clicked I guess.
     * */
    @Override
    public void onClick(View v) {
        t1.setText(R.string.changed_my_title);
    }

    /**
     * We can also handle the clicks through XML by the following steps.
     * 1. Define the android:onClick="this attribute".
     * 2. A method having the same identifier as the attribute has to be defined in the Activity.
     * 3. This method will handle the clicks of that associated View.
     * */
    public void changeText(View v) {
        t2.setText(R.string.changed_my_title_2);
    }

}