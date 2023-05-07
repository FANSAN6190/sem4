package com.example.app116_lec15;

import androidx.appcompat.app.AppCompatActivity;

import android.media.Image;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {
    boolean isegg=true;
    public void change(View view){
        ImageView iv=findViewById(R.id.imageView2);
        if(isegg){
            iv.setImageResource(R.color.purple_200);
            isegg=false;
        }
        else{
            iv.setImageResource(R.mipmap.ic_launcher_round);
            isegg=true;
        }

    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}