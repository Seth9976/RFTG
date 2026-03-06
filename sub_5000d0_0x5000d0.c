// 函数名称: sub_5000d0
// 虚拟地址: 0x5000d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_5000d0(char* arg1)
{
    // 第一条实际指令: char* result_1 = arg1
    char* result_1 = arg1
    int32_t* eax
    sub_500000(eax, &result_1)
    char* const result_2 = result_1
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    
    char* const result_3 = result_2
    sub_5a9d3d()
    char* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    result.b = 1
    return result
}
