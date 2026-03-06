// 函数名称: sub_4817f0
// 虚拟地址: 0x4817f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4817f0(int32_t arg1)
{
    // 第一条实际指令: void* eax
    void* eax
    int32_t ecx
    eax, ecx = sub_40c7a0(&data_307cd0c)
    
    if (sub_4b95c0(ecx, arg1 + 1) == 0)
        int32_t eax_3 = data_307c74c
        data_307d9b8 = arg1 + 1
        data_30d6f38 = eax_3
        data_307d9bc = 1
    else if (arg1 == 0)
        bool eax_1 = *(eax + 0x87) == 0
        *(eax + 0x87) = eax_1
        
        if (eax_1 == 1)
            *(eax + 0x44) = 0
    else if (arg1 + 1 s> 4)
        int32_t edx_2 = *(eax + 0x4c) - arg1
        int32_t edx_3 = neg.d(edx_2)
        *(eax + 0x4c) = sbb.d(edx_3, edx_3, edx_2 != 0) & arg1
    else if (*(eax + 0x4c) s< arg1)
        *(eax + 0x4c) = arg1
    else
        *(eax + 0x4c) = arg1 - 1
    
    if (*(eax + 0x4c) s< 2)
        *(eax + 0x44) = 0
    
    return 0
}
