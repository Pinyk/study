<%@page contentType="text/html" pageEncoding="GBK" %>
<html>
<head>
    <title>注册验证</title>
</head>
<jsp:useBean id="reg" scope="request" class="com.demo.jsp.Register"/>
<body>
<%
    request.setCharacterEncoding("GBK");
%>
<form action="cheak.jsp"method="post">
    用户名: <input type="text" name="name" value="<jsp:getProperty name="reg" property="name"/>">
    <%=reg.getError("errname")%><br>
    年&nbsp;&nbsp;龄: <input type="text" name="age" value="<jsp:getProperty name="reg" property="age"/>">
    <%=reg.getError("errage")%><br>
    E-mail: <input type="text" name="email" value="<jsp:getProperty name="reg" property="email"/>">
    <%=reg.getError("erremail")%><br>
    <input type="submit" value="注册"><input type="reset" value="重置">
</form>
</body>
</html>