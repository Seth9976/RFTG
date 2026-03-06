// 函数名称: sub_43f8c0
// 虚拟地址: 0x43f8c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_43f8c0()
{
    // 第一条实际指令: void* esi = data_27e7a40
    void* esi = data_27e7a40
    void* i = *(esi + 0x548)
    int32_t edx = 0
    void* i_1 = i
    
    if (i != 0)
        long double x87_r7_1 = fconvert.t(data_8c4d34)
        float* ecx_1 = i_1 + 0xbfb4
        long double result = float.t(1)
        long double x87_r2_1 = float.t(0)
        
        do
            int32_t eax_1
            
            if (edx s>= sx.d(*(*(i + 0x45844) + 0x458)))
                if (*(i_1 + 0xbfac) != 0 || *(i_1 + 0x2c0ac) != 0xffffffff)
                    eax_1 = 1
                else
                    eax_1.b = 0
                
                float* var_18 = ecx_1
                *(i_1 + 0xbfcc) =
                    fconvert.s(sub_4f6420(eax_1.b, fconvert.s(fconvert.t(*(i_1 + 0xbfcc)))))
                return result
            
            float var_8_1
            long double result_2
            long double x87_r6_1
            
            if (*(i_1 + 0xbfb0) != edx)
                var_8_1 = fconvert.s(fconvert.t(-1f))
                result_2 = result
                x87_r6_1 = x87_r2_1
            else
                result_2 = result
                x87_r6_1 = x87_r2_1
                var_8_1 = fconvert.s(result_2)
            
            long double x87_r1_6 = fconvert.t(fconvert.s(
                x87_r7_1 * fconvert.t(var_8_1) * fconvert.t(1000.0) / fconvert.t(300.0)
                + fconvert.t(*ecx_1)))
            *ecx_1 = fconvert.s(x87_r1_6)
            long double result_1 = fconvert.t(fconvert.s(x87_r1_6))
            result_1 - x87_r6_1
            eax_1.w = (result_1 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(result_1, x87_r6_1) ? 1 : 0) << 0xa
                | (result_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x800
            bool p_1 = unimplemented  {test ah, 0x5}
            float var_8_4
            
            if (p_1)
                result_1 - result_2
                eax_1.w = (result_1 < result_2 ? 1 : 0) << 8
                    | (is_unordered.t(result_1, result_2) ? 1 : 0) << 0xa
                    | (result_1 == result_2 ? 1 : 0) << 0xe | 0x800
                
                if ((eax_1:1.b & 0x41) != 0)
                    var_8_4 = fconvert.s(result_1)
                else
                    result_2 = result_1
                    var_8_4 = fconvert.s(result_2)
                
                x87_r2_1 = x87_r6_1
                result = result_2
            else
                x87_r2_1 = x87_r6_1
                result = result_1
                var_8_4 = fconvert.s(x87_r2_1)
            
            edx += 1
            *ecx_1 = fconvert.s(fconvert.t(var_8_4))
            i = *(esi + 0x548)
            ecx_1 = &ecx_1[1]
        while (i != 0)
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
