// 函数名称: sub_447080
// 虚拟地址: 0x447080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_447080(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ecx = data_27e7a40
    void* ecx = data_27e7a40
    void* esi = *(ecx + 0x548)
    void* eax
    
    if (*(esi + 0xc00c) == 1)
        int32_t var_8_1 = *(ecx + 0xc)
        long double x87_r7_1 = float.t(*(ecx + 8) - *(esi + 0xc010))
        long double temp0_1 = fconvert.t(300f)
        x87_r7_1 - temp0_1
        eax.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
        
        if ((eax:1.b & 0x41) == 0)
            *(esi + 0xc00c) = 0
        else
            eax = *arg2
            
            if (eax != 0 && (eax != 0xb || arg2[2] != *(esi + 0xc01c)))
                *(esi + 0xc00c) = 0
    
    if (*(esi + 0xc018) != 1)
        return 
    
    if ((*(data_27e7fdc + 0xc) & 1) == 0 || *(data_27e7bbc + 0x18) == 0 || *arg2 != 0xb
            || arg2[2] != *(esi + 0xc01c))
        *(esi + 0xc018) = 0
        return 
    
    int32_t var_8_3 = *(ecx + 0xc)
    long double x87_r7_2 = float.t(*(ecx + 8) - *(esi + 0xc010))
    long double temp1_1 = fconvert.t(400.0)
    x87_r7_2 - temp1_1
    eax.w = (x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe
    
    if ((eax:1.b & 0x41) != 0)
        return 
    
    sub_448660(arg2, 1)
    *(esi + 0xc00c) = 0
    *(esi + 0xc018) = 0
}
