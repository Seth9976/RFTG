// 函数名称: sub_416710
// 虚拟地址: 0x416710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_416710(char* arg1 @ esi)
{
    // 第一条实际指令: int32_t var_20
    int32_t var_20
    int32_t eax_1 = __security_cookie ^ &var_20
    int32_t eax_2 = *(arg1 + 0xc)
    void* edx = data_27e7a40
    void* ecx = *(edx + 0x28)
    var_20 = eax_2
    int32_t var_1c = 2
    
    if (ecx != 0)
        int32_t** edx_1 = data_27e7bb8
        uint32_t eax_4 = zx.d(ecx.w)
        
        if (eax_4 u< edx_1[1])
            void* eax_6 = &(*edx_1)[eax_4 * 0x13]
            
            if (*(eax_6 + 0x48) == ecx)
                int32_t var_18
                int32_t* var_2c_1 = &var_18
                void* var_30_1 = eax_6 + 0x3c
                int32_t var_14_1 = 4
                int32_t var_10_1 = 0xf4264
                var_18 = 0xfeedface
                void* ecx_1
                int32_t** edx_2
                ecx_1, edx_2 = sub_4c72b0(0xc, edx_1, ecx)
                void* var_34_1 = eax_2 * 0x1f8 + edx + 0xcac
                void* var_38_1 = eax_6 + 0x3c
                sub_4c72b0(4, edx_2, ecx_1)
    
    int128_t* result = sub_405420(&var_20)
    bool cond:0 = *(arg1 + 0x10) != 0
    *arg1 = 0
    
    if (not(cond:0))
        *(data_27e7a40 + 0x528) = 1
    
    sub_5a6aba(eax_1 ^ &var_20)
    return result
}
