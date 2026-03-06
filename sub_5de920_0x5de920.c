// 函数名称: sub_5de920
// 虚拟地址: 0x5de920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5de920(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: if (*(arg1 + 0x278) == 0)
    if (*(arg1 + 0x278) == 0)
        sub_5cce60("OpenGL not initialized")
        return 0xffffffff
    
    void* eax = arg2
    
    if (eax != 0)
    label_5de964:
        
        if ((*(*(arg1 + 0x278) + 0x14))(*(*(eax + 0x74) + 8), arg3) == 0)
            sub_5dc5a0("wglMakeCurrent()")
            return 0xffffffff
    else
        eax = sub_5ca820()
        
        if (eax != 0)
            goto label_5de964
    
    return 0
}
