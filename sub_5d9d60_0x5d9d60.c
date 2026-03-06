// 函数名称: sub_5d9d60
// 虚拟地址: 0x5d9d60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d9d60(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4 @ edi, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    void* arg_4
    void* ebx = arg_4
    bool cond:0 = *(ebx + 8) != 1
    int32_t* esi = *(ebx + 0x24)
    var_8 = esi
    
    if (not(cond:0))
        if (sub_5d9140(esi, arg4, &var_8, &arg_4) s>= 0)
            sub_5d6450(arg4[2], arg4[3], *(ebx + 4), arg5, arg6, esi[1], var_8, arg_4)
            sub_5d9330(esi)
            return 0
        
        return 0xffffffff
    
    int32_t eax_6 = esi[1]
    uint32_t eax_7
    
    if (eax_6 == 0 || (eax_6 & 0xf0000000) == 0x10000000)
        eax_7 = zx.d(eax_6.b)
    else if (eax_6 == 0x32595559 || eax_6 == 0x59565955 || eax_6 == 0x55595659)
        eax_7 = 2
    else
        eax_7 = 1
    
    int32_t esi_4 = (arg4[2] * eax_7 + 3) & 0xfffffffc
    int32_t var_14_2 = arg4[3] * esi_4
    int32_t* eax_8 = sub_5d0ac0()
    
    if (eax_8 == 0)
        sub_5cd050(eax_8)
        return 0xffffffff
    
    sub_5d6450(arg4[2], arg4[3], *(arg_4 + 4), arg5, arg6, var_8[1], eax_8, esi_4)
    sub_5d9e80(var_8, arg4, eax_8, esi_4)
    int32_t* var_44 = eax_8
    sub_5d0af0()
    return 0
}
