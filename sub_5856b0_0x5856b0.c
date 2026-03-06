// 函数名称: sub_5856b0
// 虚拟地址: 0x5856b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5856b0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glTessellationFactorAMD")
    PROC eax = wglGetProcAddress("glTessellationFactorAMD")
    data_3079788 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glTessellationModeAMD")
    data_307978c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
