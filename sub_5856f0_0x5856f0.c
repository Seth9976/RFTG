// 函数名称: sub_5856f0
// 虚拟地址: 0x5856f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5856f0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDrawElementArrayAPPLE")
    PROC eax = wglGetProcAddress("glDrawElementArrayAPPLE")
    data_3079790 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDrawRangeElementArrayAPPLE")
    data_3079794 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glElementPointerAPPLE")
    data_3079798 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glMultiDrawElementArrayAPPLE")
    data_307979c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glMultiDrawRangeElementArrayAPPLE")
    data_30797a0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
