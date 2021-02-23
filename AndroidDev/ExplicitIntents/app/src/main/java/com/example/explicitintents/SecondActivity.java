package com.example.explicitintents;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class SecondActivity extends AppCompatActivity {

    TextView text;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);

        Bundle bundle = getIntent().getExtras();
        text = findViewById(R.id.activity_second_textView_result_data);
        if (bundle != null) {
            String val = bundle.getString("sentData");
            if(val != null) {
                switch (val.toUpperCase()) {
                    case "SAMAKSH":
                        text.setText(String.format("%s, you are an idiot", val));
                        break;

                    case "ABHISHEK":
                        text.setText(String.format("%s, you are an awesome person.", val));
                        break;

                    case "ANMOL":
                        text.setText(String.format("%s, you eat shit dude.", val));
                        break;
                    default:
                        text.setText(R.string.invalid_input);
                }
            }
        }
    }
}