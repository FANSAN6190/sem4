package com.example.app116_lec16;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.ImageView;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        ImageView imageView=findViewById(R.id.imageView1);
        imageView.animate().setDuration(4000).translationX(-200);
        imageView.animate().setDuration(4000).rotationX(360);
        imageView.animate().setDuration(2000).rotationY(180);
        imageView.animate().setDuration(2000).rotation(360);
        

    }
}