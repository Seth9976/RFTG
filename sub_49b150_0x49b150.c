// 函数名称: sub_49b150
// 虚拟地址: 0x49b150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_49b150(void* arg1)
{
    // 第一条实际指令: void var_478
    void var_478
    uint32_t result = __security_cookie ^ &var_478
    uint32_t result_1 = result
    
    if (data_31602d4 == 0)
        void* const eax_1 = &data_860ec8
        
        if (*(arg1 + 0x459) == 0)
            eax_1 = &data_83f3d3
        
        void* const var_484_1 = eax_1
        int32_t var_488_1 = sx.d(*(arg1 + 0x458))
        int32_t var_48c_1 = sx.d(*(arg1 + 0x45a))
        void var_448
        sub_5a733b(&var_448, "./network/rftg.eval.%d.%d%s.net")
        sub_4b4190(&var_448, &data_2691c30)
        void* const eax_4 = &data_860ec8
        
        if (*(arg1 + 0x459) == 0)
            eax_4 = &data_83f3d3
        
        void* const var_484_2 = eax_4
        int32_t var_488_2 = sx.d(*(arg1 + 0x458))
        int32_t var_48c_2 = sx.d(*(arg1 + 0x45a))
        sub_5a733b(&var_448, "./network/rftg.role.%d.%d%s.net")
        sub_4b4190(&var_448, &data_2691bc0)
        int32_t var_484_3 = data_2691bac
        int32_t var_488_3 = data_2691bb8
        sub_5a7d4b("Role hit: %d, Role miss: %d\n")
        var_488_3.q = fconvert.d(fconvert.t(data_2691bb0) / float.t(data_2691bb8 + data_2691bac))
        sub_5a7d4b("Role avg: %f\n")
        var_488_3.q = fconvert.d(fconvert.t(data_2691bc8) / fconvert.t(data_2691bd0))
        sub_5a7d4b("Role error: %f\n")
        var_488_3.q = fconvert.d(fconvert.t(data_2691c38) / fconvert.t(data_2691c40))
        result = sub_5a7d4b("Eval error: %f\n")
        data_31602d4 = 1
    
    sub_5a6aba(result_1 ^ &var_478)
    return result
}
