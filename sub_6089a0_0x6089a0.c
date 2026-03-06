// 函数名称: sub_6089a0
// 虚拟地址: 0x6089a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6089a0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax = sub_5ca2e0("glBegin")
    int32_t eax = sub_5ca2e0("glBegin")
    *(arg1 + 0x34) = eax
    
    if (eax == 0)
        char* var_4 = sub_5cce30()
        char const* const var_8 = "glBegin"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_2 = sub_5ca2e0("glBindTexture")
    *(arg1 + 0x38) = eax_2
    
    if (eax_2 == 0)
        char* var_4_1 = sub_5cce30()
        char const* const var_8_1 = "glBindTexture"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_4 = sub_5ca2e0("glBlendFunc")
    *(arg1 + 0x3c) = eax_4
    
    if (eax_4 == 0)
        char* var_4_2 = sub_5cce30()
        char const* const var_8_2 = "glBlendFunc"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_6 = sub_5ca2e0("glBlendFuncSeparate")
    *(arg1 + 0x40) = eax_6
    
    if (eax_6 == 0)
        char* var_4_3 = sub_5cce30()
        char const* const var_8_3 = "glBlendFuncSeparate"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_8 = sub_5ca2e0("glClear")
    *(arg1 + 0x44) = eax_8
    
    if (eax_8 == 0)
        char* var_4_4 = sub_5cce30()
        char const* const var_8_4 = "glClear"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_10 = sub_5ca2e0("glClearColor")
    *(arg1 + 0x48) = eax_10
    
    if (eax_10 == 0)
        char* var_4_5 = sub_5cce30()
        char const* const var_8_5 = "glClearColor"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_12 = sub_5ca2e0("glColor4f")
    *(arg1 + 0x4c) = eax_12
    
    if (eax_12 == 0)
        char* var_4_6 = sub_5cce30()
        char const* const var_8_6 = "glColor4f"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_14 = sub_5ca2e0("glDeleteTextures")
    *(arg1 + 0x50) = eax_14
    
    if (eax_14 == 0)
        char* var_4_7 = sub_5cce30()
        char const* const var_8_7 = "glDeleteTextures"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_16 = sub_5ca2e0("glDisable")
    *(arg1 + 0x54) = eax_16
    
    if (eax_16 == 0)
        char* var_4_8 = sub_5cce30()
        char const* const var_8_8 = "glDisable"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_18 = sub_5ca2e0("glDisableClientState")
    *(arg1 + 0x58) = eax_18
    
    if (eax_18 == 0)
        char* var_4_9 = sub_5cce30()
        char const* const var_8_9 = "glDisableClientState"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_20 = sub_5ca2e0("glDrawArrays")
    *(arg1 + 0x5c) = eax_20
    
    if (eax_20 == 0)
        char* var_4_10 = sub_5cce30()
        char const* const var_8_10 = "glDrawArrays"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_22 = sub_5ca2e0("glDrawPixels")
    *(arg1 + 0x60) = eax_22
    
    if (eax_22 == 0)
        char* var_4_11 = sub_5cce30()
        char const* const var_8_11 = "glDrawPixels"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_24 = sub_5ca2e0("glEnable")
    *(arg1 + 0x64) = eax_24
    
    if (eax_24 == 0)
        char* var_4_12 = sub_5cce30()
        char const* const var_8_12 = "glEnable"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_26 = sub_5ca2e0("glEnableClientState")
    *(arg1 + 0x68) = eax_26
    
    if (eax_26 == 0)
        char* var_4_13 = sub_5cce30()
        char const* const var_8_13 = "glEnableClientState"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_28 = sub_5ca2e0("glEnd")
    *(arg1 + 0x6c) = eax_28
    
    if (eax_28 == 0)
        char* var_4_14 = sub_5cce30()
        char const* const var_8_14 = "glEnd"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_30 = sub_5ca2e0("glGenTextures")
    *(arg1 + 0x70) = eax_30
    
    if (eax_30 == 0)
        char* var_4_15 = sub_5cce30()
        char const* const var_8_15 = "glGenTextures"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_32 = sub_5ca2e0("glGetError")
    *(arg1 + 0x74) = eax_32
    
    if (eax_32 == 0)
        char* var_4_16 = sub_5cce30()
        char const* const var_8_16 = "glGetError"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_34 = sub_5ca2e0("glGetIntegerv")
    *(arg1 + 0x78) = eax_34
    
    if (eax_34 == 0)
        char* var_4_17 = sub_5cce30()
        char const* const var_8_17 = "glGetIntegerv"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_36 = sub_5ca2e0("glGetPointerv")
    *(arg1 + 0x7c) = eax_36
    
    if (eax_36 == 0)
        char* var_4_18 = sub_5cce30()
        char const* const var_8_18 = "glGetPointerv"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_38 = sub_5ca2e0("glGetString")
    *(arg1 + 0x80) = eax_38
    
    if (eax_38 == 0)
        char* var_4_19 = sub_5cce30()
        char const* const var_8_19 = "glGetString"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_40 = sub_5ca2e0("glLineWidth")
    *(arg1 + 0x84) = eax_40
    
    if (eax_40 == 0)
        char* var_4_20 = sub_5cce30()
        char const* const var_8_20 = "glLineWidth"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_42 = sub_5ca2e0("glLoadIdentity")
    *(arg1 + 0x88) = eax_42
    
    if (eax_42 == 0)
        char* var_4_21 = sub_5cce30()
        char const* const var_8_21 = "glLoadIdentity"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_44 = sub_5ca2e0("glMatrixMode")
    *(arg1 + 0x8c) = eax_44
    
    if (eax_44 == 0)
        char* var_4_22 = sub_5cce30()
        char const* const var_8_22 = "glMatrixMode"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_46 = sub_5ca2e0("glOrtho")
    *(arg1 + 0x90) = eax_46
    
    if (eax_46 == 0)
        char* var_4_23 = sub_5cce30()
        char const* const var_8_23 = "glOrtho"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_48 = sub_5ca2e0("glPixelStorei")
    *(arg1 + 0x94) = eax_48
    
    if (eax_48 == 0)
        char* var_4_24 = sub_5cce30()
        char const* const var_8_24 = "glPixelStorei"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_50 = sub_5ca2e0("glPointSize")
    *(arg1 + 0x98) = eax_50
    
    if (eax_50 == 0)
        char* var_4_25 = sub_5cce30()
        char const* const var_8_25 = "glPointSize"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_52 = sub_5ca2e0("glPopMatrix")
    *(arg1 + 0x9c) = eax_52
    
    if (eax_52 == 0)
        char* var_4_26 = sub_5cce30()
        char const* const var_8_26 = "glPopMatrix"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_54 = sub_5ca2e0("glPushMatrix")
    *(arg1 + 0xa0) = eax_54
    
    if (eax_54 == 0)
        char* var_4_27 = sub_5cce30()
        char const* const var_8_27 = "glPushMatrix"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_56 = sub_5ca2e0("glRasterPos2i")
    *(arg1 + 0xa4) = eax_56
    
    if (eax_56 == 0)
        char* var_4_28 = sub_5cce30()
        char const* const var_8_28 = "glRasterPos2i"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_58 = sub_5ca2e0("glReadBuffer")
    *(arg1 + 0xa8) = eax_58
    
    if (eax_58 == 0)
        char* var_4_29 = sub_5cce30()
        char const* const var_8_29 = "glReadBuffer"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_60 = sub_5ca2e0("glReadPixels")
    *(arg1 + 0xac) = eax_60
    
    if (eax_60 == 0)
        char* var_4_30 = sub_5cce30()
        char const* const var_8_30 = "glReadPixels"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_62 = sub_5ca2e0("glRectf")
    *(arg1 + 0xb0) = eax_62
    
    if (eax_62 == 0)
        char* var_4_31 = sub_5cce30()
        char const* const var_8_31 = "glRectf"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_64 = sub_5ca2e0("glRotated")
    *(arg1 + 0xb4) = eax_64
    
    if (eax_64 == 0)
        char* var_4_32 = sub_5cce30()
        char const* const var_8_32 = "glRotated"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_66 = sub_5ca2e0("glScissor")
    *(arg1 + 0xb8) = eax_66
    
    if (eax_66 == 0)
        char* var_4_33 = sub_5cce30()
        char const* const var_8_33 = "glScissor"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_68 = sub_5ca2e0("glTexCoord2f")
    *(arg1 + 0xbc) = eax_68
    
    if (eax_68 == 0)
        char* var_4_34 = sub_5cce30()
        char const* const var_8_34 = "glTexCoord2f"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_70 = sub_5ca2e0("glTexEnvf")
    *(arg1 + 0xc0) = eax_70
    
    if (eax_70 == 0)
        char* var_4_35 = sub_5cce30()
        char const* const var_8_35 = "glTexEnvf"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_72 = sub_5ca2e0("glTexImage2D")
    *(arg1 + 0xc4) = eax_72
    
    if (eax_72 == 0)
        char* var_4_36 = sub_5cce30()
        char const* const var_8_36 = "glTexImage2D"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_74 = sub_5ca2e0("glTexParameteri")
    *(arg1 + 0xc8) = eax_74
    
    if (eax_74 == 0)
        char* var_4_37 = sub_5cce30()
        char const* const var_8_37 = "glTexParameteri"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_76 = sub_5ca2e0("glTexSubImage2D")
    *(arg1 + 0xcc) = eax_76
    
    if (eax_76 == 0)
        char* var_4_38 = sub_5cce30()
        char const* const var_8_38 = "glTexSubImage2D"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_78 = sub_5ca2e0("glTranslatef")
    *(arg1 + 0xd0) = eax_78
    
    if (eax_78 == 0)
        char* var_4_39 = sub_5cce30()
        char const* const var_8_39 = "glTranslatef"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_80 = sub_5ca2e0("glVertex2f")
    *(arg1 + 0xd4) = eax_80
    
    if (eax_80 == 0)
        char* var_4_40 = sub_5cce30()
        char const* const var_8_40 = "glVertex2f"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_82 = sub_5ca2e0("glVertexPointer")
    *(arg1 + 0xd8) = eax_82
    
    if (eax_82 == 0)
        char* var_4_41 = sub_5cce30()
        char const* const var_8_41 = "glVertexPointer"
        sub_5cce60("Couldn't load GL function %s: %s\n")
        return 0xffffffff
    
    int32_t eax_84 = sub_5ca2e0("glViewport")
    *(arg1 + 0xdc) = eax_84
    
    if (eax_84 != 0)
        return 0
    
    char* var_4_42 = sub_5cce30()
    char const* const var_8_42 = "glViewport"
    sub_5cce60("Couldn't load GL function %s: %s\n")
    return 0xffffffff
}
