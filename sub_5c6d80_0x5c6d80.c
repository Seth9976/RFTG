// 函数名称: sub_5c6d80
// 虚拟地址: 0x5c6d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6d80(int32_t* arg1, char arg2, char arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg3
    uint32_t eax = zx.d(ebx.b)
    int32_t var_3c
    
    if (eax == 0)
        var_3c = 0x604
    else
        if (eax != 1)
            return 0
        
        var_3c = 0x603
    
    uint32_t esi = zx.d(arg2)
    
    if (esi s< arg1[8])
        int32_t eax_4
        
        if (ebx.b == 1)
            eax_4 = sub_5c6c20()
        
        if (ebx.b != 1 || eax_4 == 0)
            *(esi + arg1[9]) = ebx.b
            
            if (sub_5c7830(var_3c, 0xffffffff) != 1)
                return 0
            
            int32_t var_34_1 = *arg1
            char var_30_1 = arg2
            char var_2f_1 = ebx.b
            int32_t esi_2 = sub_5c76a0(&var_3c) - 1
            int32_t esi_3 = neg.d(esi_2)
            return sbb.d(esi_3, esi_3, esi_2 != 0) + 1
    
    return 0
}
