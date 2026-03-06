// 函数名称: sub_4dc9a0
// 虚拟地址: 0x4dc9a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4dc9a0(float* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_b4[0x18]
    sub_4e3800(&var_b4, arg2, arg1)
    sub_4e0890(&var_b4, 8)
    long double x87_r7 = fconvert.t(-0f)
    float var_c4 = fconvert.s(x87_r7)
    float var_c0 = fconvert.s(x87_r7)
    long double x87_r6 = fconvert.t(-1f)
    float var_54 = var_c4
    float var_bc = fconvert.s(x87_r6)
    var_c4 = fconvert.s(x87_r6)
    float var_50 = var_c0
    float var_c0_1 = fconvert.s(x87_r7)
    float var_4c = var_bc
    float var_bc_1 = fconvert.s(x87_r7)
    int32_t var_48 = 0
    float ecx_1 = var_c4
    var_c4 = fconvert.s(x87_r7)
    int32_t var_44 = 0
    int32_t var_40 = 0x3f800000
    float var_bc_2 = fconvert.s(x87_r7)
    float var_3c = ecx_1
    float var_c0_2 = fconvert.s(x87_r6)
    float var_38 = var_c0_1
    float var_34 = var_bc_1
    int32_t var_30 = 0x3f800000
    int32_t var_2c = 0
    int32_t var_28 = 0
    float var_24 = var_c4
    float var_20 = var_c0_2
    float var_1c = var_bc_2
    int32_t var_18 = 0
    int32_t var_14 = 0x3f800000
    int32_t var_10 = 0
    void* esi = &var_54
    int32_t i_1 = 6
    int32_t i
    
    do
        sub_405970(&var_c4, esi, arg2 + 4)
        *esi = var_c4
        *(esi + 4) = var_c0_2
        *(esi + 8) = var_bc_2
        esi += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
    int16_t x87control
    int32_t result = sub_4dc680(&var_b4, x87control, &var_54, 0x840b84)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
