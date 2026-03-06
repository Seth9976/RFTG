// 函数名称: sub_60cad0
// 虚拟地址: 0x60cad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60cad0(void* arg1 @ edi)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 8)
    int32_t* esi = *(arg1 + 8)
    (*(*esi + 0x170))(esi, 0)
    (*(*esi + 0x164))(esi, 0x142)
    (*(*esi + 0xe4))(esi, 7, 0)
    (*(*esi + 0xe4))(esi, 0x16, 1)
    (*(*esi + 0xe4))(esi, 0x89, 0)
    (*(*esi + 0x10c))(esi, 0, 1, 4)
    (*(*esi + 0x10c))(esi, 0, 2, 2)
    (*(*esi + 0x10c))(esi, 0, 3, 0)
    (*(*esi + 0x10c))(esi, 0, 4, 4)
    (*(*esi + 0x10c))(esi, 0, 5, 2)
    (*(*esi + 0x10c))(esi, 0, 6, 0)
    
    if (*(arg1 + 0x50) != 0)
        (*(*esi + 0xe4))(esi, 0xce, 1)
    
    (*(*esi + 0x10c))(esi, 1, 1, 1)
    (*(*esi + 0x10c))(esi, 1, 4, 1)
    long double x87_r7 = float.t(1)
    float var_44 = fconvert.s(x87_r7)
    long double x87_r6 = float.t(0)
    float var_40 = fconvert.s(x87_r6)
    float var_3c = fconvert.s(x87_r6)
    float var_38 = fconvert.s(x87_r6)
    float var_34 = fconvert.s(x87_r6)
    float var_2c = fconvert.s(x87_r6)
    float var_28 = fconvert.s(x87_r6)
    float var_24 = fconvert.s(x87_r6)
    float var_20 = fconvert.s(x87_r6)
    float var_18 = fconvert.s(x87_r6)
    float var_14 = fconvert.s(x87_r6)
    float var_10 = fconvert.s(x87_r6)
    float var_c = fconvert.s(x87_r6)
    float var_30 = fconvert.s(x87_r7)
    float var_1c = fconvert.s(x87_r7)
    float var_8 = fconvert.s(x87_r7)
    (*(*esi + 0xb0))(esi, 0x100, &var_44)
    (*(*esi + 0xb0))(esi, 2, &var_44)
    int32_t var_4c_2 = 0x20
    int32_t var_50_2 = 0xff
    void* var_54_6 = arg1 + 0x54
    int32_t result = sub_5cd100()
    *(arg1 + 0x4c) = 1
    return result
}
