<%@ page contentType="text/html" pageEncoding="GBK" %>
<html>
<head>
    <title>¼ì²é</title>
</head>
<%
    request.setCharacterEncoding("GBK");
%>
<jsp:useBean id="reg" scope="request" class="com.demo.jsp.Register"/>
<jsp:setProperty name="reg" property="*"/>
<body>
<%
    if(reg.isValidate()){
%>
    <jsp:forward page="success.jsp"/>
<%
    }else{
%>
    <jsp:forward page="index.jsp"/>
<%
    }
%>
</body>
</html>
