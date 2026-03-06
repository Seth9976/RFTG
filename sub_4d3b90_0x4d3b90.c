// 函数名称: sub_4d3b90
// 虚拟地址: 0x4d3b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d3b90(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = *arg1
    int32_t* ebx = *arg1
    
    if (ebx == 0)
        return 
    
    int32_t* var_c_1 = nullptr
    
    if (*ebx s<= 0)
        return 
    
    int32_t var_8_1 = 0
    
    do
        void* esi_2 = ebx[1] + var_8_1
        int32_t eax = *(esi_2 + 0x24)
        
        if (eax != 0)
            (*(*data_3078804 + 0x2c))(eax)
            *(esi_2 + 0x24) = 0
        
        int32_t eax_2 = *(esi_2 + 0x28)
        
        if (eax_2 != 0)
            (*(*data_3078804 + 0x38))(eax_2)
            *(esi_2 + 0x28) = 0
        
        int32_t eax_4 = *(esi_2 + 0x2c)
        
        if (eax_4 != 0)
            (*(*data_3078804 + 0x2c))(eax_4)
            *(esi_2 + 0x2c) = 0
        
        int32_t eax_6 = *(esi_2 + 0x30)
        
        if (eax_6 != 0)
            (*(*data_3078804 + 0x38))(eax_6)
            *(esi_2 + 0x30) = 0
        
        var_8_1 += 0x140
        arg1 = var_c_1 + 1
        *(esi_2 + 0x34) = 0
        var_c_1 = arg1
    while (arg1 s< *ebx)
}
