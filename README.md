# 🚀 Moving & Rotating Platform Project (Unreal Engine C++)

> Unreal Engine 5 | C++ 기반 플랫폼 액터 구현  
> [프로젝트 영상 유튜브 링크](https://youtu.be/amJIjgYYMlo)

---

## 🎬 시연 영상

> 구현된 발판과 회전 구조물이 **레벨에서 정상 동작**하는 모습입니다.

[![시연 영상](https://img.youtube.com/vi/amJIjgYYMlo/0.jpg)](https://youtu.be/amJIjgYYMlo)

---

## 📌 프로젝트 개요

이번 프로젝트는 Unreal Engine의 C++ 기능을 활용하여 **움직이는 발판(Moving Platform)** 과 **회전하는 구조물(Rotating Platform)** 을 구현한 과제입니다.  

**왕복 이동**과 **지속 회전**을 서로 다른 클래스로 분리하여 관리하며, `Tick()`과 `DeltaTime`을 기반으로 한 프레임 독립적인 움직임을 구성했습니다.

---

## ✅ 구현한 기능

### 🟦 AMovingPlatform (이동 발판)
- `UStaticMeshComponent` 포함 → 맵 배치 가능
- `BeginPlay()`에서 위치 저장 → `Tick()`에서 왕복 이동
- 이동 속도 및 최대 이동 거리 조절 가능
- `DeltaTime` 기반 프레임 독립적 이동

```cpp
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
float MoveSpeed = 150.0f;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
float MaxRange = 500.0f;
````

---

### 🟨 ARotatingPlatform (회전 구조물)

* `UStaticMeshComponent` 포함 → 맵 배치 가능
* `Tick()`에서 `AddActorLocalRotation()`으로 회전
* 회전 속도는 `UPROPERTY`로 설정 가능

```cpp
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotating")
FRotator RotationSpeed = FRotator(0.f, 90.f, 0.f);
```

---

## 🧪 과제 평가 기준 대응

| 요구사항                   | 구현 여부 |
| ---------------------- | ----- |
| 서로 다른 Actor 클래스 2개 구현  | ✅     |
| StaticMeshComponent 포함 | ✅     |
| C++ 클래스 2개 이상 구현       | ✅     |
| Tick 함수에서 동작 구현        | ✅     |
| DeltaTime으로 프레임 독립성 확보 | ✅     |
| 왕복 이동 로직 구현            | ✅     |
| 변수 UPROPERTY로 에디터에 노출  | ✅     |
| Details 패널에서 실시간 반영    | ✅     |
| Category 설정            | ✅     |
| 액터들을 레벨에 여러 개 배치       | ✅     |
| 플레이 시 정상 동작            | ✅     |

---

## 🎨 사용한 에셋

* **Space Cruiser Defender**
  Epic Games Marketplace의 **기간 한정 무료 콘텐츠**
  플랫폼 메시 및 구조물 등에 활용
  👉 [Marketplace 바로가기](https://www.unrealengine.com/marketplace/en-US/product/space-cruiser-defender)

---

## 🙋 개발 후기

> 평소에는 기획이나 게임 로직 위주의 작업을 많이 해봤지만, 이번 과제를 통해 **Unreal Engine C++ 기반으로의 실질적인 동작 구현**을 경험할 수 있었습니다.
>
> 시각적인 연출은 부족하지만, 코드 구조와 기능 구현에 집중했고, `Tick`, `DeltaTime`, `UPROPERTY`, `Actor` 구조 등 **언리얼 핵심 요소를 실습**할 수 있었던 좋은 기회였습니다.

---

## 🛠️ 개발 환경

* Unreal Engine 5.x
* Visual Studio 2022
* C++
* Windows 10

