// 函数名称: sub_4d4e00
// 虚拟地址: 0x4d4e00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d4e00(int32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx = *(arg2 + 0x2c)
    float var_50
    int32_t* eax_5
    
    if (edx != 0)
        int32_t* eax_7 = arg4 * 0x2c + *(arg3 + 0x14)
        
        if (*(edx + 0x80) s<= 0)
            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, "c:\ax2010\engine\xArray.h", 0xb5, 
                "XArray<struct Mat4>::operator []")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int80_t st0_1
        st0_1, eax_5 = sub_535630(eax_7, edx, eax_7, *(edx + 0x7c), &var_50)
    else
        if (*(arg3 + 8) != 4)
            sub_4c5870("defSubMesh.vertexFormat == VERTEX_FORMAT_POS_NORM_COL_TEX", &data_83f3d3, 
                "Structure.cpp", 0x424, "sStructureGetAnimatedVertexPosition")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_5 = *(arg3 + 0x14) + arg4 * 0x24
    
    float edx_1 = *eax_5
    float ecx_2 = eax_5[1]
    float var_70 = fconvert.s(fconvert.t(*(arg2 + 0x24)))
    float var_20 = edx_1
    float edx_2 = eax_5[2]
    long double x87_r6 = fconvert.t(var_70)
    float eax_9 = *(arg2 + 8)
    float ecx_3 = *(arg2 + 0xc)
    float edx_3 = *(arg2 + 0x10)
    var_50 = fconvert.s(fconvert.t(var_20) * x87_r6)
    float var_4c = fconvert.s(fconvert.t(ecx_2) * x87_r6)
    int32_t var_6c = *(arg2 + 0x14)
    int32_t var_68 = *(arg2 + 0x18)
    int32_t var_64 = *(arg2 + 0x1c)
    float var_48 = fconvert.s(x87_r6 * fconvert.t(edx_2))
    int32_t var_60 = *(arg2 + 0x20)
    void var_40
    __builtin_memcpy(&var_40, &var_70, 0x20)
    var_20 = var_50
    float var_1c_1 = var_4c
    float var_18_1 = var_48
    float var_3c[0x7]
    sub_405970(&var_50, &var_20, &var_3c)
    var_20 = var_50
    var_20 = fconvert.s(fconvert.t(eax_9) + fconvert.t(var_20))
    int32_t* entry_ebx
    *entry_ebx = var_20
    entry_ebx[1] = fconvert.s(fconvert.t(ecx_3) + fconvert.t(var_4c))
    entry_ebx[2] = fconvert.s(fconvert.t(edx_3) + fconvert.t(var_48))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
