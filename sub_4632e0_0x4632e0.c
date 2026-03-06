// 函数名称: sub_4632e0
// 虚拟地址: 0x4632e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4632e0(int32_t arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: void* eax = data_27e7a40
    void* eax = data_27e7a40
    int32_t* esi_1 = *(eax + 0x548) + 0x45848
    
    if (*esi_1 != 0)
        eax = sub_406d90(esi_1)
    
    int32_t var_10 = 0
    int32_t var_c = 1
    return sub_42dd70(eax, &var_10, arg2, &var_10, arg2.b, 0, arg1)
}
