global solution
section .text
solution:
    ; 입력값 n을 eax 레지스터로 로드
    mov eax, edi
    ; 입력값 t를 ecx 레지스터로 로드
    mov ecx, esi
    
    ; 반복 횟수를 ecx 레지스터로 사용하여 반복문 구현
    loop_start:
        ; eax 레지스터의 값을 2배로 곱함
        shl eax, 1
        ; ecx 레지스터의 값을 1 감소시킴
        dec ecx
        ; ecx 레지스터의 값이 0보다 크면 반복문의 시작 지점으로 이동
        jnz loop_start
    
    ; 결과값을 eax 레지스터에 저장하고 반환
    ret
