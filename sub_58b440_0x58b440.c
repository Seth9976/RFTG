// 函数名称: sub_58b440
// 虚拟地址: 0x58b440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b440()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBeginSceneEXT")
    PROC eax = wglGetProcAddress("glBeginSceneEXT")
    data_307a7bc = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glEndSceneEXT")
    data_307a7c0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
