<%@page contentType="text/html" pageEncoding="GBK" %>
<html>
<head>
    <title>ע����֤</title>
</head>
<jsp:useBean id="reg" scope="request" class="com.demo.jsp.Register"/>
<body>
<%
    request.setCharacterEncoding("GBK");
%>
<form action="cheak.jsp"method="post">
    �û���: <input type="text" name="name" value="<jsp:getProperty name="reg" property="name"/>">
    <%=reg.getError("errname")%><br>
    ��&nbsp;&nbsp;��: <input type="text" name="age" value="<jsp:getProperty name="reg" property="age"/>">
    <%=reg.getError("errage")%><br>
    E-mail: <input type="text" name="email" value="<jsp:getProperty name="reg" property="email"/>">
    <%=reg.getError("erremail")%><br>
    <input type="submit" value="ע��"><input type="reset" value="����">
</form>
</body>
</html>