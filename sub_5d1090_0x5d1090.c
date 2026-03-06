// 函数名称: sub_5d1090
// 虚拟地址: 0x5d1090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5d1090(int32_t* arg1)
{
    // 第一条实际指令: uint32_t result = data_bedd68
    uint32_t result = data_bedd68
    
    if (result != 0)
        if (arg1 == 0)
            sub_5d1060()
            result = data_bedd68
        
        if (result != 0 && result != arg1)
            sub_5d6e90(result, 0xd, 0, 0)
            result = sub_5c7830(0x303, 0xffffffff)
            
            if (result.b != 0)
                result = sub_5c8d70()
                
                if (result != 0)
                    int32_t ecx_1 = *(result + 0xbc)
                    
                    if (ecx_1 != 0)
                        result = ecx_1(result)
    
    data_bedd68 = arg1
    
    if (arg1 != 0)
        sub_5d6e90(arg1, 0xc, 0, 0)
        result = sub_5c7830(0x303, 0xffffffff)
        
        if (result.b != 0)
            result = sub_5c8d70()
            
            if (result != 0)
                int32_t ecx_2 = *(result + 0xb8)
                
                if (ecx_2 != 0)
                    return ecx_2(result)
    
    return result
}
