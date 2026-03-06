// 函数名称: sub_4d75c0
// 虚拟地址: 0x4d75c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4d75c0()
{
    // 第一条实际指令: int32_t* result_1
    int32_t* result_1
    int32_t* result_2 = result_1
    sub_51b290()
    int32_t* result_3 = nullptr
    int32_t* result
    
    while (true)
        if (result_3 != 0)
            result = result_3[8]
        else
            result = *data_27e7fdc
        
        if (result == 0)
            break
        
        while (true)
            result_1 = result
            result = result[8]
            
            if (result_1[7].b == 0)
                break
            
            if (result == 0)
                return result
        
        result_3 = result_1
        
        if (sub_4d7330(result_1) != 0)
            result_1[7].b = 1
    
    return result
}
