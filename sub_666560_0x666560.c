// 函数名称: sub_666560
// 虚拟地址: 0x666560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_666560(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    int32_t edi = *(arg1 + 0x70)
    *(arg1 + 0x70) = edi | 0x100000
    int32_t result
    
    if (arg2 == 0)
        result = 0
    else
        int32_t eax_3 = *(arg1 + 0x264)
        
        if (eax_3 == 0)
            result = sub_5a881a(arg2)
        else
            result = eax_3(arg1, arg2)
        
        if (result == 0 && (*(arg1 + 0x70) & 0x100000) == 0)
            sub_664320(arg1, "Out of Memory")
            noreturn
    
    *(arg1 + 0x70) = edi
    return result
}
