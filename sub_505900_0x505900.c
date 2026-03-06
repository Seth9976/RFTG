// 函数名称: sub_505900
// 虚拟地址: 0x505900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_505900(int32_t* arg1)
{
    // 第一条实际指令: char* ecx = *arg1
    char* ecx = *arg1
    
    if (ecx == 0 || *ecx == 0)
        return 
    
    arg1 = sub_4c4060(arg1)
    int32_t temp0_1 = arg1[1]
    arg1[1] -= 1
    
    if (temp0_1 == 1)
        int32_t esi_2 = arg1[3] + 0x10
        sub_4f4430(arg1, sub_4f4380(esi_2), esi_2)
}
