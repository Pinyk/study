<%@ page contentType="text/html" pageEncoding="GBK" %>
<html>
<head>
    <title>成功页面</title>
</head>
<%
    request.setCharacterEncoding("GBk");
%>
<jsp:useBean id="reg" scope="request" class="com.demo.jsp.Register"/>
<body>
用户名：<jsp:getProperty name="reg" property="name"/><br>
年&nbsp;&nbsp;龄: <jsp:getProperty name="reg" property="age"/><br>
E-mail: <jsp:getProperty name="reg" property="email"/><br>
</body>
</html>
