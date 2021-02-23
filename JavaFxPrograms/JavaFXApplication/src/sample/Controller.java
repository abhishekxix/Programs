package sample;

import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.effect.DropShadow;
import javafx.scene.layout.GridPane;
import javafx.scene.web.WebEngine;
import javafx.scene.web.WebView;
import javafx.stage.FileChooser;
import java.io.File;
import java.util.List;

public class Controller {

    @FXML
    public GridPane gridPane;
    @FXML
    public Button Open;
    @FXML
    public WebView webView;

    @FXML
    private Label label;

    public void initialize() {
        Open.setEffect(new DropShadow());
    }

    @FXML
    public void handleLabelMouseEntry() {
        label.setScaleX(2.0);
        label.setScaleY(2.0);
    }

    @FXML
    public void handleLabelMouseExit() {
        label.setScaleX(1.0);
        label.setScaleY(1.0);
    }

    @FXML
    public void handleClick() {
        FileChooser chooser = new FileChooser();

        chooser.setTitle("Open File");
        chooser.getExtensionFilters().addAll(
                new FileChooser.ExtensionFilter("Text", "*.txt"),
                new FileChooser.ExtensionFilter("PDF", "*.pdf"),
                new FileChooser.ExtensionFilter("Images", "*.jpg", "*.png"),
                new FileChooser.ExtensionFilter("All Files", "*.*")
        );

        List<File> file = chooser.showOpenMultipleDialog(gridPane.getScene().getWindow());

        if(file != null) {
            System.out.println(file.get(0).getAbsoluteFile());
        } else {
            System.out.println("File not selected");
        }
    }

    @FXML
    public void handleLinkClick() {
        System.out.println("The link was clicked");
//        try {
//            Desktop.getDesktop().browse(new URI("https://www.javafx.com"));
//        } catch(IOException | URISyntaxException e) {
//            e.printStackTrace();
//        }
        WebEngine engine = webView.getEngine();
        engine.load("https://www.udemy.com/course/java-the-complete-java-developer-course/learn/lecture/5954896#questions");
    }
}
