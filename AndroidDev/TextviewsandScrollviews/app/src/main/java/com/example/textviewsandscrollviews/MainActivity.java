package com.example.textviewsandscrollviews;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    private TextView textView;
    private String b = "This button was a man and you touched him. You are gay.\n" +
                       "There is no going back now.";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button buttonForText = findViewById(R.id.for_scroll_button);

        textView = findViewById(R.id.view_text);

        buttonForText.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                textView.setText(b);
            }
        });
    }

}