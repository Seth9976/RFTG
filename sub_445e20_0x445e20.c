// 函数名称: sub_445e20
// 虚拟地址: 0x445e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_445e20(void* arg1)
{
    // 第一条实际指令: int32_t* var_8
    int32_t* var_8
    int32_t result = sub_419400(&var_8)
    
    if (result.b != 0)
        int32_t* esi_1 = var_8
        
        if (*esi_1 == 0x3e)
            result = sub_445db0(arg1, 0x10)
        
        if (*esi_1 != 0x3e || result.b != 0)
            result = *esi_1
            
            if (result == 0x3f || result == 0x22 || result == 0x40 || result == 0x24 || result == 0x23
                    || result == 0x25 || result == 0x38 || result == 0x35 || result == 0x37
                    || result == 0x36 || result == 0x3a || result == 0x39 || result == 0x3b
                    || result == 0x3c || result == 0x3d || result == 0x3e || result == 0x32
                    || result == 0x42 || result == 0x41)
                return sub_419340()
            
            if (result == 0x33 || result == 0x34)
                result = sub_46b2b0(*(data_27e7a40 + 0x74))
                
                if (*(result + 0x550) == 1)
                    return sub_419340()
    
    return result
}
