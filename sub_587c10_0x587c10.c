// 函数名称: sub_587c10
// 虚拟地址: 0x587c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_587c10()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDrawTransformFeedbackInstanced")
    PROC eax = wglGetProcAddress("glDrawTransformFeedbackInstanced")
    data_3079de4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glDrawTransformFeedbackStreamInstanced")
    data_3079de8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
