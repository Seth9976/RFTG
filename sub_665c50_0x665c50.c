// 函数名称: sub_665c50
// 虚拟地址: 0x665c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_665c50(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t var_c = 0
    int128_t* result = sub_6663c0(1, arg6, arg5)
    
    if (result != 0)
        result[0x28].d = 0x7fffffff
        *(result + 0x284) = 0x7fffffff
        int32_t __saved_ebp
        __setjmp3(&__saved_ebp, esi, edi, sub_664090(result, sub_5ab190, 0x40), 0)
        sub_6664b0(result, arg5, arg6, arg7)
        sub_6640e0(result, arg2, arg3, arg4)
        
        if (sub_663660(result, arg1) == 0)
            var_c = 1
        
        *(result + 0xb4) = 0x2000
        
        if (var_c == 0)
            result[0xb].d = sub_666560(result, *(result + 0xb4))
            
            if (result[0xb].d == 0)
                var_c = 1
        
        if (var_c == 0)
            sub_6666f0(result, 0, 0, 0)
            sub_665bf0(result)
            return result
        
        sub_666530(result, result[0xb].d)
        result[0xb].d = 0
        sub_666450(result, arg7, arg5)
    
    return 0
}
