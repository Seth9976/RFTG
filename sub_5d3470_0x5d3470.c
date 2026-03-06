// 函数名称: sub_5d3470
// 虚拟地址: 0x5d3470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d3470(void* arg1)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 0xa0)
    int32_t* result = *(arg1 + 0xa0)
    
    if (result != 0)
        if (*result != 0)
            if (result[1] != 0)
                int32_t* eax = result[1]
                (*(*eax + 8))(eax)
                *(*(arg1 + 0xa0) + 4) = 0
            
            int32_t* eax_2 = **(arg1 + 0xa0)
            (*(*eax_2 + 8))(eax_2)
            **(arg1 + 0xa0) = 0
        
        int32_t var_c_3 = *(arg1 + 0xa0)
        result = sub_5d0af0()
        *(arg1 + 0xa0) = 0
    
    return result
}
