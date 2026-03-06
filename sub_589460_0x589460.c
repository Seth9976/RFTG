// 函数名称: sub_589460
// 虚拟地址: 0x589460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_589460()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glLockArraysEXT")
    PROC eax = wglGetProcAddress("glLockArraysEXT")
    data_307a218 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glUnlockArraysEXT")
    data_307a21c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
