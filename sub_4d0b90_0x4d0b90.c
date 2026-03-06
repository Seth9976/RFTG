// 函数名称: sub_4d0b90
// 虚拟地址: 0x4d0b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d0b90(void* arg1 @ esi)
{
    // 第一条实际指令: while (*(arg1 + 0x514) != 0)
    while (*(arg1 + 0x514) != 0)
        void* var_8 = sub_4db440(arg1 + 0x50c)
        sub_4c4590(&data_83f3d3)
        sub_518190(data_27e7bb8 + 0x50, &var_8)
    
    int32_t i = 0
    
    if (*(arg1 + 0x508) s<= 0)
        *(arg1 + 0x508) = 0
        return 
    
    void* ebx_2 = arg1 + 0x24
    
    do
        int32_t eax_3 = *ebx_2
        
        if (eax_3 != 0)
            _aligned_free_base(eax_3)
        
        i += 1
        ebx_2 += 0x28
    while (i s< *(arg1 + 0x508))
    
    *(arg1 + 0x508) = 0
}
