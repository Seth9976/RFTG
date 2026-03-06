// 函数名称: sub_5b1f0f
// 虚拟地址: 0x5b1f0f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b1f0f(int32_t arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    enum WIN32_ERROR edi_2
    
    if (sub_5afa0b(arg1) == 0xffffffff)
        edi_2 = NO_ERROR
    else
        void* eax_1 = data_3166ee0
        
        if ((arg1 != 1 || (*(eax_1 + 0x84) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x44) & 1) == 0))
        label_5b1f61:
            
            if (CloseHandle(sub_5afa0b(arg1)) != 0)
                edi_2 = NO_ERROR
            else
                edi_2 = GetLastError()
        else
            int32_t eax_2 = sub_5afa0b(2)
            
            if (sub_5afa0b(1) != eax_2)
                goto label_5b1f61
            
            edi_2 = NO_ERROR
    
    sub_5af985(arg1)
    *((&data_3166ee0)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4) = 0
    
    if (edi_2 == NO_ERROR)
        return 0
    
    ___acrt_errno_map_os_error(edi_2)
    return 0xffffffff
}
