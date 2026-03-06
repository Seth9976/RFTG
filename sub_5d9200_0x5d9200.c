// 函数名称: sub_5d9200
// 虚拟地址: 0x5d9200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d9200(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x10)
    int32_t ecx = *(arg1 + 0x10)
    int32_t* edi = *(arg1 + 0x24)
    int32_t var_1c = 0
    int32_t var_18 = 0
    int32_t eax = *(arg1 + 0xc)
    int32_t var_c
    int32_t var_8
    int32_t result = sub_5d9140(edi, &var_1c, &var_c, &var_8)
    
    if (result s< 0)
        return result
    
    sub_610960(*(arg1 + 0x28), &var_1c, edi[1], eax, ecx, var_c, var_8)
    return sub_5d9330(edi)
}
