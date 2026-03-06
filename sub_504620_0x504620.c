// 函数名称: sub_504620
// 虚拟地址: 0x504620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_504620(int32_t* arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t* var_10 = nullptr
    int32_t* var_10 = nullptr
    int32_t var_c = 0
    int32_t var_8 = 0
    sub_4ffc50(arg1)
    int32_t* eax = sub_5a898b(arg1, "wb")
    var_10 = eax
    
    if (eax == 0)
        int32_t* var_1c_7 = arg1
        sub_4c5680("DefXML: failed to open file %s")
        int32_t eax_8
        eax_8.b = 0
        return eax_8
    
    int32_t var_c_1 = 0
    int32_t var_8_1 = 0
    int32_t** var_1c_1 = &var_10
    int32_t** var_1c_2 = &var_10
    int32_t* entry_ebx
    sub_554ac0(sub_554ac0(&var_10, &data_892164, sub_554c30(&var_10)), *entry_ebx, &data_5a90cf)
    int32_t var_8_2 = var_8_1 + 1
    int32_t var_c_2 = 1
    sub_5045f0(arg2, &var_10)
    int32_t var_8_3 = var_8_2 - 1
    void* edi_1 = *entry_ebx
    int32_t** esi_2 = &var_10
    uint32_t eax_4
    int32_t* ecx_1
    eax_4, ecx_1 = sub_554c30(esi_2)
    int32_t** var_24 = &var_10
    int32_t** var_1c_4 = &var_10
    sub_554ac0(sub_554ac0(eax_4, &data_892168, ecx_1), edi_1, &data_5a90cf)
    int32_t** var_1c_5 = &var_10
    sub_554ac0(&var_10, &data_89215c, &data_5a90cf)
    int32_t var_c_3 = 2
    sub_554c30(esi_2)
    sub_5a8c61(var_10)
    int32_t eax_7
    eax_7.b = 1
    return eax_7
}
