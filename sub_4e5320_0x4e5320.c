// 函数名称: sub_4e5320
// 虚拟地址: 0x4e5320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e5320(long double arg1 @ st0)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_Makexloc@_Locimp@locale@std@@CAXABV_Locinfo@3@HPAV123@PBV23@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_b4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3166380 & 1) == 0)
        data_3166380.d |= 1
        int32_t var_8_1 = 0
        data_316637c = sub_509140(0x12, "sys/DebugFont.font")
        int32_t var_8_2 = 0xffffffff
    
    int32_t esi = 1
    int32_t var_1c = 1
    int32_t edi = 0x3e8
    
    if (*(data_27e7fd0 + 0x27) != 0 && ((*(sub_4c98a0() + 0x3c) & 0x200) != 0 || data_27e7bc1 != 0))
        var_1c = 2
        esi = 2
        edi = 0x7d0
    
    char* const result_1 = &data_83f3d3
    int32_t var_8_3 = 1
    void* ebx = data_27e7fe4
    int32_t var_b8 = divs.dp.d(sx.q(*(ebx + 0x64)), edi)
    int32_t var_bc = divs.dp.d(sx.q(*(ebx + 0x68)), edi)
    int32_t var_c0 = divs.dp.d(sx.q(*(ebx + 0x70)), esi)
    int32_t var_c4 = divs.dp.d(sx.q(*(ebx + 0x6c)), esi)
    int32_t var_c8 = divs.dp.d(sx.q(*(ebx + 0x60)), esi)
    var_8_3.b = 2
    char* var_14
    char* eax_22 = *sub_4c4a50(&var_14, "draw calls: %d, vb: %d, vao: %d, verts: %dK, tris: %dK\r")
    
    if (eax_22 == 0)
        eax_22 = &data_83f3d3
    
    sub_4c4620(&result_1, eax_22)
    var_8_3.b = 1
    char* eax_24 = var_14
    
    if (eax_24 != 0 && *eax_24 != 0)
        void* eax_26 = sub_4c4060(&var_14)
        int32_t temp2_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_2 = *(eax_26 + 0xc) + 0x10
            sub_4f4430(eax_26, sub_4f4380(esi_2), esi_2)
            esi = var_1c
    
    int32_t var_b8_3 = divs.dp.d(sx.q(*(ebx + 0x8c)), esi)
    int32_t var_bc_1 = divs.dp.d(sx.q(*(ebx + 0x88)), esi)
    int32_t var_c0_1 = divs.dp.d(sx.q(*(ebx + 0x84)), esi)
    var_8_3.b = 3
    char* eax_39 = *sub_4c4a50(&var_14, "sprite: draws %d, draws calls %d, texture swaps %d\r")
    
    if (eax_39 == 0)
        eax_39 = &data_83f3d3
    
    sub_4c4620(&result_1, eax_39)
    var_8_3.b = 1
    char* eax_41 = var_14
    
    if (eax_41 != 0 && *eax_41 != 0)
        void* eax_43 = sub_4c4060(&var_14)
        int32_t temp3_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_4 = *(eax_43 + 0xc) + 0x10
            sub_4f4430(eax_43, sub_4f4380(esi_4), esi_4)
            esi = var_1c
    
    int32_t var_b8_6 = divs.dp.d(sx.q(*(ebx + 0x78)), esi)
    int32_t var_bc_2 = divs.dp.d(sx.q(*(ebx + 0x74)), esi)
    var_8_3.b = 4
    char* eax_53 = *sub_4c4a50(&var_14, "draw3d: meshes %d (draws calls %d)\r")
    
    if (eax_53 == 0)
        eax_53 = &data_83f3d3
    
    sub_4c4620(&result_1, eax_53)
    var_8_3.b = 1
    char* eax_55 = var_14
    
    if (eax_55 != 0 && *eax_55 != 0)
        void* eax_57 = sub_4c4060(&var_14)
        int32_t temp4_1 = *(eax_57 + 4)
        *(eax_57 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_6 = *(eax_57 + 0xc) + 0x10
            sub_4f4430(eax_57, sub_4f4380(esi_6), esi_6)
            esi = var_1c
    
    int32_t var_b8_9 = divs.dp.d(sx.q(*(ebx + 0x80)), esi)
    int32_t var_bc_3 = divs.dp.d(sx.q(*(ebx + 0x7c)), esi)
    var_8_3.b = 5
    char* eax_67 = *sub_4c4a50(&var_14, "draw3d: quads %d (draws calls %d)\r")
    
    if (eax_67 == 0)
        eax_67 = &data_83f3d3
    
    sub_4c4620(&result_1, eax_67)
    var_8_3.b = 1
    char* eax_69 = var_14
    
    if (eax_69 != 0 && *eax_69 != 0)
        void* eax_71 = sub_4c4060(&var_14)
        int32_t temp5_1 = *(eax_71 + 4)
        *(eax_71 + 4) -= 1
        
        if (temp5_1 == 1)
            int32_t esi_8 = *(eax_71 + 0xc) + 0x10
            sub_4f4430(eax_71, sub_4f4380(esi_8), esi_8)
    
    if (*(data_27e7fd0 + 0x27) != 0)
        (*(*data_3078804 + 0xac))(0)
        float var_1c_1 = fconvert.s(arg1)
        (*(*data_3078804 + 0xac))(1)
        long double x87_r1
        var_14 = fconvert.s(x87_r1)
        var_bc_3.q = fconvert.d(fconvert.t(var_14))
        char** var_c4_2
        var_c4_2.q = fconvert.d(fconvert.t(var_1c_1))
        var_8_3.b = 6
        char* eax_77 = *sub_4c4a50(&var_14, "gpu eyes %0.2f ms, vr end %0.2f ms\r")
        
        if (eax_77 == 0)
            eax_77 = &data_83f3d3
        
        sub_4c4620(&result_1, eax_77)
        var_8_3.b = 1
        char* eax_79 = var_14
        
        if (eax_79 != 0 && *eax_79 != 0)
            void* eax_81 = sub_4c4060(&var_14)
            int32_t temp7_1 = *(eax_81 + 4)
            *(eax_81 + 4) -= 1
            
            if (temp7_1 == 1)
                int32_t esi_10 = *(eax_81 + 0xc) + 0x10
                sub_4f4430(eax_81, sub_4f4380(esi_10), esi_10)
    
    unimplemented  {fld st0, dword [0x8a57e0]}
    float var_2c = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
    unimplemented  {fstp dword [ebp-0x28], st0}
    unimplemented  {fld st0, dword [0x8a55c8]}
    float var_28 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
    unimplemented  {fstp dword [ebp-0x24], st0}
    unimplemented  {fld st0, dword [0x8a53b0]}
    float var_3c = var_2c
    float var_24 = fconvert.s(unimplemented  {fst dword [ebp-0x20], st0})
    float var_34 = var_24
    float var_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x1c], st0})
    unimplemented  {fstp dword [ebp-0x1c], st0}
    float var_38 = var_28
    float var_30 = var_20
    var_14 = data_316637c
    char const* const var_a4
    int32_t ecx_8
    int32_t* edx_20
    ecx_8, edx_20 = sub_5abfc0(&var_a4, 0, 0x68)
    unimplemented  {fld1 }
    float var_88 = fconvert.s(unimplemented  {fstp dword [ebp-0x84], st0})
    unimplemented  {fstp dword [ebp-0x84], st0}
    int32_t var_b8_14 = 0xffffffff
    float* var_bc_4 = &var_3c
    int32_t var_90 = 0xffffffff
    var_a4 = "NORMAL"
    char** var_a0 = &var_14
    int32_t var_94 = 1
    int32_t var_9c = 0
    int32_t var_98 = 0
    sub_4cc7a0(nullptr, &var_a4, 1.21256766e-38f, edx_20, ecx_8)
    int32_t var_8_4 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp6_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp6_1 == 1)
            int32_t esi_12 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_12), esi_12)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
