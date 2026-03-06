// 函数名称: sub_58d690
// 虚拟地址: 0x58d690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58d690()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glCombinerStageParameterfvNV")
    PROC eax = wglGetProcAddress("glCombinerStageParameterfvNV")
    data_307adb0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glGetCombinerStageParameterfvNV")
    data_307adb4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
