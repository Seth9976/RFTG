// 函数名称: sub_554cc0
// 虚拟地址: 0x554cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_554cc0(uint32_t arg1, void* arg2, char arg3)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    esi[2] -= 1
    int32_t* ecx
    
    if (arg3 != 0)
        arg1, ecx = sub_554c30(esi)
    else if (esi[1] == 1)
        int32_t* var_10_1 = esi
        arg1, ecx = sub_554ac0(arg1, &data_89215c, ecx)
        esi[1] = 3
    
    int32_t* var_10_2 = esi
    int32_t* var_10_3 = esi
    int32_t* var_10_4 = esi
    uint32_t result = sub_554ac0(sub_554ac0(sub_554ac0(arg1, &data_892168, ecx), arg2, &data_5a90cf), 
        &data_89215c, &data_5a90cf)
    esi[1] = 2
    return result
}
