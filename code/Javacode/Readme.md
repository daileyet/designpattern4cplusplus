## Setup eclipse project

install maven at first then execute command as below to convert to eclipse project

```
# under folder: Javacode
mvn eclipse:clean eclipse:eclipse
```

load project into eclipse IDE

## Run

### Run in Eclipse

Run in eclipse, the main class is `com.openthinks.samples.Bootstarter`

### Run in command

```
# under folder: Javacode
mvn clean package
java -jar target\pattern4J-1.0-SNAPSHOT.jar
```

## Configuration

Configuration file is file `com.openthinks.samples.Demo` in the path as below:

`src/main/resources/META-INF/services/com.openthinks.samples.Demo`


