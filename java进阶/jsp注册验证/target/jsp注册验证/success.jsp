<%@ page contentType="text/html" pageEncoding="GBK" %>
<html>
<head>
    <title>�ɹ�ҳ��</title>
</head>
<%
    request.setCharacterEncoding("GBk");
%>
<jsp:useBean id="reg" scope="request" class="com.demo.jsp.Register"/>
<body>
�û�����<jsp:getProperty name="reg" property="name"/><br>
��&nbsp;&nbsp;��: <jsp:getProperty name="reg" property="age"/><br>
E-mail: <jsp:getProperty name="reg" property="email"/><br>
</body>
</html>
