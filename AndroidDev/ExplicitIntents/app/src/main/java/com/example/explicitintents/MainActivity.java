package com.example.explicitintents;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText inputData;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }

    public void changeActivity(View view) {
        inputData = findViewById(R.id.activity_main_enter_data);
        Intent it = new Intent(this, SecondActivity.class);
        it.putExtra("sentData", inputData.getText().toString());
        Toast.makeText(this, "App made by the great abhishek singh.", Toast.LENGTH_SHORT).show();
        startActivity(it);
    }
}