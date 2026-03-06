// 函数名称: sub_5224b0
// 虚拟地址: 0x5224b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_5224b0(void* arg1)
{
    // 第一条实际指令: int32_t* result = arg1 + 8
    int32_t* result = arg1 + 8
    char* ecx = *result
    
    if (ecx != 0 && *ecx != 0)
        result = sub_4c4060(result)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = result[3] + 0x10
            return sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    return result
}
