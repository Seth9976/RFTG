// 函数名称: sub_5be0c0
// 虚拟地址: 0x5be0c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5be0c0(int32_t* arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    eax_1, edx = zip_source_tell_write(*arg1)
    
    if (edx s> 0)
    label_5be0ea:
        int32_t eax_4
        int32_t edx_2
        eax_4, edx_2 = sub_5c0880(arg1, arg2, arg3, arg4)
        
        if (edx_2 s> 0)
        label_5be0ff:
            int32_t eax_5
            int32_t edx_3
            eax_5, edx_3 = zip_source_tell_write(*arg1)
            
            if (edx_3 s> 0)
                return 0
            
            if (edx_3 s>= 0 && eax_5 u>= 0)
                return 0
        else if (edx_2 s>= 0 && eax_4 u>= 0)
            goto label_5be0ff
    else if (edx s>= 0 && eax_1 u>= 0)
        goto label_5be0ea
    
    return 0xffffffff
}
