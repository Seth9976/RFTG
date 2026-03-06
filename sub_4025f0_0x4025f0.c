// 函数名称: sub_4025f0
// 虚拟地址: 0x4025f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4025f0(void* arg1)
{
    // 第一条实际指令: char* ecx = *(arg1 + 0xfe0)
    char* ecx = *(arg1 + 0xfe0)
    void* result = arg1 + 0xfe0
    
    if (ecx != 0 && *ecx != 0)
        result = sub_4c4060(result)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(result + 0xc) + 0x10
            return sub_4f4430(result, sub_4f4380(esi_2), esi_2)
    
    return result
}
