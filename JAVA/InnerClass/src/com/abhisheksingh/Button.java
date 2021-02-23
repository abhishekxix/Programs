package com.abhisheksingh;

public class Button {
    public interface OnClickListener {
        void onClick(String title);
    }

    private String title;
    private OnClickListener onClickListener;

    public Button(String title) {
        this.title = title;
    }

    public String getTitle() {
        return this.title;
    }

    public void setOnClickListener(OnClickListener onClickListener) {
        this.onClickListener = onClickListener;
    }

    public void onClick() {
        this.onClickListener.onClick(this.title);
    }
}
