// 函数名称: sub_56dab0
// 虚拟地址: 0x56dab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56dab0()
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    float var_8 = fconvert.s(x87_r7)
    float var_14 = fconvert.s(x87_r7)
    int32_t y
    
    if ((*(data_27e7fdc + 0xc) & 2) != 0)
        y = data_27e7bbc
    
    POINT point
    
    if ((*(data_27e7fdc + 0xc) & 2) == 0 || *(y + 0x18) == 0)
        if (data_3079218 == 1)
            data_3079218 = 0
            y = ShowCursor(1)
    else if (data_3079218 != 0)
        BOOL eax_2
        eax_2, y = GetCursorPos(&point)
        
        if (eax_2 != 0)
            int32_t x = point.x
            int32_t ecx_1 = x - data_307921c
            data_307921c = x
            long double x87_r6_1 = float.t(0)
            y = point.y
            void* edx_2 = y - data_3079220
            data_3079220 = y
            var_8 = fconvert.s(float.t(ecx_1) + x87_r6_1)
            var_14 = fconvert.s(x87_r6_1 + float.t(edx_2))
    else
        BOOL eax_1
        eax_1, y = GetCursorPos(&data_307921c)
        
        if (eax_1 != 0)
            data_3079218 = 1
            y = ShowCursor(0)
    
    int32_t edx_3 = data_3079274
    data_3079234 = fconvert.s(fconvert.t(data_3079234) + fconvert.t(var_8))
    data_3079238 = fconvert.s(fconvert.t(data_3079238) + fconvert.t(var_14))
    void* eax_3 = sub_4e7b40(y, edx_3)
    
    if (eax_3 != 0)
        *(eax_3 + 0x2c) = fconvert.s(fconvert.t(var_8) + fconvert.t(*(eax_3 + 0x2c)))
        *(eax_3 + 0x3c) = fconvert.s(fconvert.t(*(eax_3 + 0x3c)) + fconvert.t(var_14))
    
    void* result = sub_4eb5a0(y, data_307927c)
    void* result_1 = result
    
    if (result_1 != 0)
        int32_t y_1 = y
        data_3079280 = fconvert.s(fconvert.t(data_3079280) + fconvert.t(data_30792ac))
        point.y = fconvert.s(fconvert.t(-0.0) * fconvert.t(200.0))
        int16_t x87control_1
        long double st0_1
        st0_1, x87control_1 = sub_406680(fconvert.s(fconvert.t(data_3079280)))
        float var_c_1 = fconvert.s(st0_1)
        int32_t mxcsr
        long double x87_r7_22 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(sub_686860(mxcsr, 
            x87control_1, fconvert.t(data_3079280))))))
        long double x87_r5_1 = fconvert.t(var_c_1)
        long double x87_r3_1 = fconvert.t(point.y)
        long double x87_r5_3 = fconvert.t(200.0)
        point.x = fconvert.s(fconvert.t(fconvert.s(x87_r5_3 + fconvert.t(data_3079284)))
            + fconvert.t(fconvert.s(fconvert.t(-200.0) * x87_r7_22 - x87_r5_1 * x87_r3_1)))
        point.y = fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(data_3079288) + fconvert.t(0.0099999997764825821)))
            + fconvert.t(fconvert.s(x87_r3_1 * x87_r7_22 - x87_r5_1 * x87_r5_3)))
        result = fconvert.s(fconvert.t(point.x))
        long double x87_r7_35 = fconvert.t(point.y)
        *(result_1 + 0x40) = result
        *(result_1 + 0x44) = fconvert.s(x87_r7_35)
        *(result_1 + 0x48) = fconvert.s(float.t(0))
    
    return result
}
